[@bs.val] external require: string => 'a = "require";

type log = {
  id: string,
  content: string,
  timestamp: string,
};

type book = {
  id: string,
  title: string,
  author: string,
};

let logs: array(log) = require("../data/logs.json");
let books: array(book) = require("../data/books.json");