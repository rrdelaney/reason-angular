let displayNameModule = () => ();

let make = ReasonAngular.NgModule.make(displayNameModule);

ReasonAngular.NgModule.decorators(
  make,
  [|
    {
      "_type": ReasonAngular.Annotations.ngModule,
      "args": [|
        ReasonAngular.Decorator.ngModule({
          "declarations": [|DisplayNameComponent.displayName|]
        })
      |]
    }
  |]
);

ReasonAngular.NgModule.ctorParameters(make, () => [||]);