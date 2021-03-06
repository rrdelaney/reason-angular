import {
  Component,
  ɵrenderComponent as renderComponent,
  ɵComponentType as ComponentType
} from '@angular/core'

@Component({
  selector: 'app',
  template: `
    <h3>This is my app!</h3>
    <p>
      <display-name [name]="name"></display-name>
    </p>
  `
})
export class App {
  name = 'Ryan'
}

renderComponent(App as ComponentType<App>)
