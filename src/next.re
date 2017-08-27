module Link = {
  external link : ReasonReact.reactClass = "default" [@@bs.module "next/link"];
  let make
      ::href=?
      ::_as=?
      prefetch::(prefetch: option bool)=?
      replace::(replace: option bool)=?
      shallow::(shallow: option bool)=?
      passHref::(passHref: option bool)=?
      children =>
    ReasonReact.wrapJsForReason
      reactClass::link
      props::
        Js.Undefined.(
          {
            "href": from_opt href,
            "as": from_opt _as,
            "prefetch": from_opt prefetch,
            "replace": from_opt replace,
            "shallow": from_opt shallow,
            "passHref": from_opt passHref
          }
        )
      children;
};

module Head = {
  external head : ReasonReact.reactClass = "default" [@@bs.module "next/head"];
  let make children =>
    ReasonReact.wrapJsForReason reactClass::head props::(Js.Obj.empty ()) children;
};
