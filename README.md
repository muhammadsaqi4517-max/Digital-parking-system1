# Digital-parking-system1
A C++ Parking Management System that manages car and bike parking, assigns slots, calculates parking fees, and displays parking statistics. Demonstrates OOP concepts including inheritance, encapsulation, abstraction, and polymorphism.
# 🚗 Parking Management System

A simple C++ console-based Parking Management System that manages car and bike parking, assigns parking slots, calculates fees, and displays parking statistics.

## ✨ Features

- Park cars and bikes
- Automatic parking slot assignment
- Parking fee calculation
- Track occupied and available slots
- Display total cars and bikes
- Calculate total parking earnings
- Simple menu-driven interface

## 🛠️ Technologies Used

- C++
- Object-Oriented Programming
- iostream
- string

## 📚 Concepts Demonstrated

- **Inheritance:** Car and Bike inherit from Vehicle.
- **Encapsulation:** Uses protected data members.
- **Abstraction:** Uses a pure virtual function.
- **Polymorphism:** Implements function overriding.
- **Constructors:** Initialize vehicle information.
- **Static Members:** Track vehicles and parking fees.

## ▶️ How to Run

1. Clone this repository.
2. Open the project in a C++ IDE.
3. Compile the source code.
4. Run the program.

```bash
g++ "oop project.cpp" -o parking
```

```bash
./parking
```

## 💻 Usage

Select an option from the main menu:

```text
1. Park Car
2. Park Bike
3. Status
0. Exit
```

Enter the vehicle number and parking hours when prompted. The system automatically assigns a parking slot and calculates the parking fee.

## 💰 Parking Fee Structure

| Vehicle | Fee Per Hour |
|---|---:|
| Car | Rs. 50 |
| Bike | Rs. 20 |

**Maximum Parking Capacity:** 10 Vehicles

## 🎯 Project Purpose

This project demonstrates the practical implementation of Object-Oriented Programming concepts in C++. It provides hands-on experience with classes, inheritance, abstraction, polymorphism, and static data members.

## 👨‍💻 Author

**Muhammad Saqib Khan**

Computer Science Student

---

⭐ If you find this project useful, consider giving this repository a star!
