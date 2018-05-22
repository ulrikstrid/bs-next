# bs-next

[Reason](https://reasonml.github.io) bindings for
[Next.js](https://github.com/zeit/next.js) v6.

## API

Bindings are provided for the only two components provided by Next.js:

* [`Next.Head`](https://github.com/zeit/next.js/tree/6.0.3#populating-head)
* [`Next.Link`](https://github.com/zeit/next.js/tree/6.0.3#with-link)

## Example

```reason
let component = ReasonReact.statelessComponent("Index");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      <Next.Head>
        <title> (ReasonReact.stringToElement("My Page Title")) </title>
      </Next.Head>

      <Next.Link href="/about">
        <a> (ReasonReact.stringToElement("About")) </a>
      </Next.Link>
    </div>
}
```
