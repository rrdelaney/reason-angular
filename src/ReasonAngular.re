module Annotations = {
  type annotationType;
  [@bs.module "@angular/core"]
  external component : annotationType = "Component";
  [@bs.module "@angular/core"] external input : annotationType = "Input";
};

module Instructions = {
  [@bs.module "@angular/core"] external textNode : int => unit = "o0T";
  [@bs.module "@angular/core"]
  external textNodeValue : (int, string) => unit = "o0t";
  [@bs.module "@angular/core"]
  external createBinding1 : (string, string, string) => string = "o0i1";
};

type component;

external createComponent : (unit => unit) => component = "%identity";

type componentDefOptions = {
  .
  "_type": component,
  "tag": string,
  "factory": unit => Js.Json.t,
  "template": (Js.Json.t, Js.boolean) => unit,
  "inputs": Js.Dict.t(string)
};

type componentDef;

[@bs.module "@angular/core"]
external defineComponent : componentDefOptions => componentDef =
  "o0defineComponent";

[@bs.set] external ngComponentDef : (component, componentDef) => unit = "";

type decorator = {
  .
  "_type": Annotations.annotationType,
  "args": array(Js.Json.t)
};

[@bs.set] external decorators : (component, array(decorator)) => unit = "";

[@bs.set]
external propDecorators : (component, Js.Dict.t(array(decorator))) => unit =
  "";

[@bs.set]
external ctorParameters : (component, unit => array(string)) => unit = "";