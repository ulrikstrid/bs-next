# bs-next

[BuckleScript](https://github.com/bucklescript/bucklescript) bindings for
[Next.js](https://github.com/zeit/next.js) 4.

## API

Bindings are provided for the only two components provided by Next.js:

* [`Next.Head`](https://github.com/zeit/next.js/#populating-head)
* [`Next.Link`](https://github.com/zeit/next.js/#with-link)

## Example

```reason
let component = ReasonReact.statelessComponent("Index");

let make = (~items: Listings.items, _children) => {
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
