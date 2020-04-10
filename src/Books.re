module Book = {
  [@react.component]
  let make = (~book: Data.book) =>
    <li>
      <p> {book.title}->React.string </p>
      <p> "by"->React.string " "->React.string {book.author}->React.string </p>
    </li>;
};

[@react.component]
let make = (~books: array(Data.book)) => {
  let children =
    books->Belt.Array.map(book => <Book book key={book.id} />)->React.array;
  <ul> children </ul>;
};