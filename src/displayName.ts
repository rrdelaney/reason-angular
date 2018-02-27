import { Component, OnInit, ViewContainerRef } from '@angular/core'
import { make } from './displayNameComponent'

@Component({
  selector: 'display-name',
  inputs: ['name'],
  template: '<ng-container></ng-container>'
})
export class DisplayName implements OnInit {
  constructor(private readonly vcr: ViewContainerRef) {}

  ngOnInit() {
    console.log(make)
    this.vcr.createComponent(make)
  }
}
