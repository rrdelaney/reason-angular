import { NgModule } from '@angular/core'
import { App } from './app'
import { Greeting } from './greeting'
import { make } from './displayNameModule'

@NgModule({
  declarations: [App, Greeting],
  imports: [make]
})
export class AppModule {}
