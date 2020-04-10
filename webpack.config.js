const path = require("path");
const HtmlWebpackPlugin = require("html-webpack-plugin");

const bundleOutput = path.join(__dirname, "build");

const { NODE_ENV, PORT } = process.env;

const isProd = NODE_ENV === "production";

module.exports = {
  entry: "./src/Index.bs.js",
  mode: isProd ? "production" : "development",
  output: {
    path: bundleOutput,
    filename: "js/app.[hash:8].js",
  },
  module: {
    rules: [
      {
        test: /\.css$/i,
        use: ["style-loader", "css-loader"],
      },
    ],
  },
  plugins: [
    new HtmlWebpackPlugin({
      template: "./src/index.html",
      meta: {
        description: "Edouard Alvard's personal website.",
        author: "Edouard Alvard",
        "twitter:card": "summary",
        "twitter:title": "Edouard Alvard",
        "twitter:description": "Edouard Alvard's personal website.",
      },
    }),
  ],
  devServer: {
    compress: true,
    contentBase: bundleOutput,
    port: PORT || 8000,
    historyApiFallback: true,
    host: "0.0.0.0",
  },
};
