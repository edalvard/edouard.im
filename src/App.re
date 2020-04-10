include CssReset;
[%raw "require('@reach/skip-nav/styles.css')"];

module Styles = {
  open Css;

  let container =
    style([minHeight(vh(100.)), display(`flex), flexDirection(column)]);

  let content =
    style([
      padding2(~v=px(0), ~h=px(16)),
      maxWidth(px(1024)),
      width(`percent(100.)),
      margin2(~v=px(0), ~h=auto),
      flex(`num(1.)),
    ]);

  let section = {
    style([
      padding2(~v=px(64), ~h=px(0)),
      boxShadow(Shadow.box(~y=px(1), ~blur=px(0), rgba(0, 0, 0, 0.05))),
    ]);
  };

  let introduction = style([maxWidth(px(640)), paddingBottom(px(16))]);

  let link =
    style([
      color(hex("0000ED")),
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
  <div className=Styles.container>
    <Reach.SkipNav.Link> "Skip to content"->React.string </Reach.SkipNav.Link>
    <Header />
    <Reach.SkipNav.Content>
      <main className=Styles.content>
        <section className=Styles.section>
          <h1> "Edouard Alvard."->React.string </h1>
          <div className=Styles.introduction>
            <p>
              "I'm a front-end developer with an interest in system thinking, inclusive human-centred experience, functional programming and static typing."
              ->React.string
            </p>
            <p>
              "I believe in the ability to create positive social change through accessible and trustworthy technology."
              ->React.string
            </p>
            <p>
              "Today, I'm looking for my next opportunity in the healthcare industry to embrace and understand its challenges and to leverage my expertise in front-end engineering."
              ->React.string
            </p>
            <p>
              "My spare time is spent reading, improving, skiing or building mechanical keyboards."
              ->React.string
            </p>
          </div>
          <a className=Styles.link href="mailto:opportunity@edouard.im">
            "Looking for full-time job opportunities"->React.string
            {js| →|js}->React.string
          </a>
        </section>
        <section className=Styles.section>
          <h2> "Logs"->React.string </h2>
          <p> "A selection of my activities in 2020."->React.string </p>
          <Logs logs=Data.logs />
        </section>
        <section className=Styles.section>
          <h2> "Reading"->React.string </h2>
          <p> "A list of books I've read in 2020."->React.string </p>
          <Books books=Data.books />
        </section>
      </main>
    </Reach.SkipNav.Content>
    <Footer />
  </div>;