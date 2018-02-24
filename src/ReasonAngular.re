module Annotations = {
  type annotationType;
  [@bs.module "@angular/core"]
  external component : annotationType = "Component";
  [@bs.module "@angular/core"] external input : annotationType = "Input";
  [@bs.module "@angular/core"] external ngModule : annotationType = "NgModule";
};

module Instructions = {
  [@bs.module "@angular/core"] external textNode : int => unit = "o0T";
  [@bs.module "@angular/core"]
  external textNodeValue : (int, string) => unit = "o0t";
  [@bs.module "@angular/core"]
  external createBinding1 : (string, string, string) => string = "o0i1";
};

module Decorator = {
  type arg;
  type t = {
    .
    "_type": Annotations.annotationType,
    "args": array(arg)
  };
  external component :
    {
      .
      "selector": string,
      "template": string
    } =>
    arg =
    "%identity";
  external ngModule : {. "declarations": array(unit => unit)} => arg =
    "%identity";
};

module Component = {
  type t;
  external make : (unit => unit) => t = "%identity";
  type componentDefOptions = {
    .
    "_type": t,
    "tag": string,
    "factory": unit => Js.Json.t,
    "template": (Js.Json.t, Js.boolean) => unit,
    "inputs": Js.Dict.t(string)
  };
  type componentDef;
  [@bs.module "@angular/core"]
  external defineComponent : componentDefOptions => componentDef =
    "o0defineComponent";
  [@bs.set] external ngComponentDef : (t, componentDef) => unit = "";
  [@bs.set] external decorators : (t, array(Decorator.t)) => unit = "";
  [@bs.set]
  external propDecorators : (t, Js.Dict.t(array(Decorator.t))) => unit = "";
  [@bs.set] external ctorParameters : (t, unit => array(string)) => unit = "";
};

module NgModule = {
  type t;
  external make : (unit => unit) => t = "%identity";
  [@bs.set] external decorators : (t, array(Decorator.t)) => unit = "";
  [@bs.set] external ctorParameters : (t, unit => array(string)) => unit = "";
};