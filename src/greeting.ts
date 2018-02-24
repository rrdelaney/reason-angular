import { Component, Input } from '@angular/core'

@Component({
  selector: 'greeting',
  template: `{{name}} Welcome!`
})
export class Greeting {
  @Input() name: string
}
