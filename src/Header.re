module Styles = {
  open Css;

  let navigation =
    style([
      top(zero),
      position(`sticky),
      padding(px(16)),
      backgroundColor(hex("fff")),
      boxShadow(Shadow.box(~y=px(1), ~blur=px(0), rgba(0, 0, 0, 0.05))),
    ]);

  let container =
    style([
      maxWidth(px(992)),
      margin2(~v=px(0), ~h=auto),
      display(`flex),
      justifyContent(spaceBetween),
      alignItems(center),
    ]);

  let homeLink =
    style([hover([color(hex("0000ED")), transitionDuration(300)])]);

  let name = style([fontWeight(bold)]);

  let link =
    style([
      padding2(~v=px(8), ~h=px(16)),
      lineHeight(`abs(1.)),
      backgroundColor(rgba(0, 0, 0, 0.025)),
      borderRadius(px(4)),
      transitionDuration(300),
      hover([backgroundColor(rgba(0, 0, 0, 0.05))]),
    ]);
};

[@react.component]
let make = () =>
  <header className=Styles.navigation>
    <div className=Styles.container>
      <a className=Styles.homeLink href="/" ariaLabel="Home">
        <span className=Styles.name> "edouard"->React.string </span>
        ".im"->React.string
      </a>
      <a className=Styles.link href="https://github.com/edalvard">
        "GitHub"->React.string
      </a>
    </div>
  </header>;