/**
  Ask and remember a user's name and say hello

 Run as:
    swift interactive.swift
*/
 

var running = true
var names:[String] = []

while running {
  print ("Your name: ")

  if let value = readLine(){
    if value=="exit" {
      print ("Bye!")
      running=false
    } else if names.contains(value) {
      print ("Hallo \(value), we have met before :)")
    } else {
      names.append(value)
      print ("Hi \(value)!")
    }
  }
}

