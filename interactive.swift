/**
 * Ask and remember a user's name and say hello
 Run as:
   swift interactive.swift
 */


while true {
  print ("\nPlease enter your name")
  print (" or exit to quit")

  if let name = readLine(){
    if name=="exit" { break }
    if name=="" { continue }
    print ("Hello \(name); have we met before...?\n\n")
  }
}
