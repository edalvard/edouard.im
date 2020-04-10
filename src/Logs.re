module Log = {
  [@react.component]
  let make = (~log: Data.log) =>
    <li> <p> {log.content}->React.string </p> </li>;
};

[@react.component]
let make = (~logs: array(Data.log)) => {
  let children =
    logs->Belt.Array.map(log => <Log log key={log.id} />)->React.array;
  <div>
    <p>
      "Last update:"->React.string
      " "->React.string
      {logs[0].timestamp}->React.string
    </p>
    <ul> children </ul>
  </div>;
};