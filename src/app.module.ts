import { NgModule } from '@angular/core'
import { App } from './app'
import { Greeting } from './greeting'
import { displayNameModule } from './displayNameModule'

// @ts-ignore
@NgModule({
  declarations: [App, Greeting],
  imports: [displayNameModule]
})
export class AppModule {}
