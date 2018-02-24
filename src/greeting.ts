import { Component, Input } from '@angular/core'
// import { displayName } from './displayName'

@Component({
  selector: 'greeting',
  template: `<display-name [name]="name"></display-name> Welcome!`
})
export class Greeting {
  @Input() name: string
}
