let displayName = () => ();

let make = ReasonAngular.createComponent(displayName);

ReasonAngular.decorators(
  make,
  [|
    {
      "_type": ReasonAngular.Annotations.component,
      "args": [|
        Js.Json.object_(
          Js.Dict.fromArray([|
            ("selector", Js.Json.string("greeting")),
            ("template", Js.Json.string("{{displayName(name)}} Welcome!"))
          |])
        )
      |]
    }
  |]
);

ReasonAngular.ctorParameters(make, () => [||]);

ReasonAngular.propDecorators(
  make,
  Js.Dict.fromArray([|
    ("name", [|{"_type": ReasonAngular.Annotations.input, "args": [||]}|])
  |])
);

type context = {. "name": string};

external decodeContext : Js.Json.t => context = "%identity";

let render = (ctx, cm) => {
  let ctx = decodeContext(ctx);
  if (Js.to_bool(cm)) {
    ReasonAngular.Instructions.textNode(0);
  };
  ReasonAngular.Instructions.textNodeValue(
    0,
    ReasonAngular.Instructions.createBinding1("", ctx##name, " Welcome!")
  );
};

ReasonAngular.ngComponentDef(
  make,
  ReasonAngular.defineComponent({
    "_type": make,
    "tag": "display-name",
    "factory": () => Js.Json.object_(Js.Dict.empty()),
    "template": render,
    "inputs": Js.Dict.fromArray([|("name", "name")|])
  })
);