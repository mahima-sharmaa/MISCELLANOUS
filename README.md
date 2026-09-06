MISCELLANOUS

This repository contains the programming tasks completed for the Programming domain selection.

The repository includes a collection of beginner to medium-level projects developed using C++ and web technologies. These projects demonstrate fundamental programming concepts, problem-solving, data handling, user interaction, and API integration.

Projects

1. Number Guessing Game

A command-line C++ game where the computer randomly generates a number between 1 and 100, and the user attempts to guess it.

Features

- Generates a random number between 1 and 100
- Allows the user to make multiple guesses
- Displays "Too high" or "Too low" hints
- Counts the number of attempts
- Displays a congratulatory message when the correct number is guessed
- Allows the user to play again

Concepts Used

- C++
- Random number generation
- Loops
- Conditional statements
- User input/output
- "srand()" and "rand()"
- Time-based random seed

File

- "number_guessing_game.cpp" - Source code for the Number Guessing Game

---

2. Simple Calculator

A command-line C++ calculator that performs basic arithmetic operations based on user input.

Features

The calculator allows the user to:

- Enter two numbers
- Select an arithmetic operator
- Perform addition
- Perform subtraction
- Perform multiplication
- Perform division
- Handle division by zero
- Perform multiple calculations

Operations Supported

- "+" Addition
- "-" Subtraction
- "*" Multiplication
- "/" Division

Concepts Used

- C++
- Switch statements
- Conditional statements
- Loops
- User input/output
- Arithmetic operations
- Basic error handling

File

- "simple_calculator.cpp" - Source code for the Simple Calculator

---

3. To-Do List

A command-line C++ To-Do List application that allows users to add, view, and delete tasks.

Features

The application allows the user to:

- Add a new task
- View all saved tasks
- Delete a selected task
- Display task numbers
- Handle empty task lists
- Validate task numbers
- Exit the application

Concepts Used

- C++
- "vector"
- "string"
- Loops
- Switch statements
- Conditional statements
- User input/output
- "push_back()"
- "erase()"
- Basic data management

File

- "to_do_list.cpp" - Source code for the To-Do List application

---

4. Weather Application

A web-based Weather Application that allows users to search for a city and view its current weather information using the Open-Meteo API.

Features

The application allows the user to:

- Search for a city
- Search by clicking the Search button
- Search by pressing the Enter key
- Display the city and country
- Display the current temperature
- Display the current weather condition
- Display a weather icon
- Display humidity
- Display wind speed
- Show a loading message while fetching data
- Display error messages for invalid cities
- Use the application on mobile devices

Weather Information

The application displays:

- Temperature in °C
- Weather condition
- Humidity percentage
- Wind speed in km/h
- Weather condition icon

It supports weather conditions such as:

- Clear Sky
- Partly Cloudy
- Overcast
- Foggy
- Drizzle
- Rain
- Snow
- Rain Showers
- Snow Showers
- Thunderstorm

API Used

The application uses the Open-Meteo API.

- Geocoding API - Finds the latitude and longitude of the searched city
- Forecast API - Retrieves the current weather information

Concepts Used

- HTML
- CSS
- JavaScript
- DOM Manipulation
- Event Listeners
- Fetch API
- Async/Await
- API Integration
- JSON Data Handling
- Functions
- Conditional Statements
- Error Handling
- Responsive Web Design
- Media Queries

Files

- "index.html" - Structure and layout of the Weather Application
- "style.css" - Styling and responsive design
- "script.js" - Weather API integration and application functionality

---

Technologies Used

C++

The following projects are developed using C++:

- Number Guessing Game
- Simple Calculator
- To-Do List

Web Technologies

The Weather Application is developed using:

- HTML
- CSS
- JavaScript
- Open-Meteo API

Concepts Demonstrated

Across these projects, the repository demonstrates:

- Variables and data types
- User input and output
- Conditional statements
- Loops
- Switch statements
- Functions
- Arrays and vectors
- Strings
- Random number generation
- Basic error handling
- DOM manipulation
- Event handling
- API integration
- Asynchronous programming
- JSON data handling
- Responsive web design
- Basic problem-solving and data management

Project Structure

Programming-Projects/
│
├── Number Guessing Game/
│   └── number_guessing_game.cpp
│
├── Simple Calculator/
│   └── simple_calculator.cpp
│
├── To-Do List/
│   └── to_do_list.cpp
│
└── Weather Application/
    ├── index.html
    ├── style.css
    └── script.js

How to Run

C++ Projects

Compile and run the C++ source files using any C++ compiler or IDE such as Visual Studio Code, Code::Blocks, or Dev-C++.

Weather Application

Open the "index.html" file in a web browser. Enter a city name in the search box and click Search to view its current weather information.

Author

Mahima Sharma
