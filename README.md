
# Campus Event Registration System

## Introduction
A C++ command-line application for managing university
campus workshop registrations.

## Features
- Register students
- Validate required fields
- Prevent duplicate registration numbers
- Display all registrations
- Search registrations by registration number

## Project Structure

- include/Student.h: Student class declaration
- src/Student.cpp: Student class implementation
- include/RegistrationManager.h: Registration manager declaration
- src/RegistrationManager.cpp: Registration business logic
- src/main.cpp: Main user interface

## OOP Concepts
- Classes and objects
- Encapsulation
- Abstraction
- Reusable methods

## Design Principle
Separation of Concerns:
The user interface, student data and registration
logic are separated into different modules.

## Compilation

g++ -std=c++17 -Iinclude src/main.cpp src/Student.cpp src/RegistrationManager.cpp -o campus

## Execution

./campus
