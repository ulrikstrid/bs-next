module Link = {
  [@bs.module "next/link"] external link : ReasonReact.reactClass = "default";
  let make =
      (
        ~href=?,
        ~_as=?,
        ~prefetch: option(Js.boolean)=?,
        ~replace: option(Js.boolean)=?,
        ~shallow: option(Js.boolean)=?,
        ~passHref: option(Js.boolean)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=link,
      ~props=
        Js.Undefined.(
          {
            "href": from_opt(href),
            "as": from_opt(_as),
            "prefetch": from_opt(prefetch),
            "replace": from_opt(replace),
            "shallow": from_opt(shallow),
            "passHref": from_opt(passHref)
          }
        ),
      children
    );
};

module Head = {
  [@bs.module "next/head"] external head : ReasonReact.reactClass = "default";
  let make = (children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=head,
      ~props=Js.Obj.empty(),
      children
    );
};
