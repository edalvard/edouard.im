module Styles = {
  open Css;

  let container =
    style([
      padding(px(16)),
      maxWidth(px(1024)),
      width(`percent(100.)),
      margin2(~v=px(0), ~h=auto),
      display(`flex),
      justifyContent(spaceBetween),
      alignItems(center),
    ]);

  let link =
    style([hover([color(hex("0000ED")), transitionDuration(300)])]);
};

[@react.component]
let make = () =>
  <footer className=Styles.container>
    <span> "No tracking"->React.string </span>
    <a
      className=Styles.link
      href="https://github.com/edalvard/edouard.im/issues">
      "Open issue on GitHub"->React.string
    </a>
  </footer>;