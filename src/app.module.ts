import { NgModule } from '@angular/core'
import { App } from './app'
import { Greeting } from './greeting'
import { make } from './displayNameComponent'

@NgModule({
  declarations: [App, Greeting, make]
})
export class AppModule {}
