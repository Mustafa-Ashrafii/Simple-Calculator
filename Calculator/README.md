# 🚆 Multi-Mode Transport System in C++

This is a console-based transport management system developed in C using the Dev-C++ IDE. It simulates ticket booking, checking schedules, and ticket removal for **airlines**, **railways**, and **car transport** systems with basic authentication and payment options.

---

## ✈️ Supported Transport Modes

- **Airline System**  
  Airlines: Shaheen, Air Blue, PIA, Jinnah Express  
  Features: View flights, book ticket, cancel ticket  

- **Railway System**  
  Trains: Green Line, Tezgaam, Awami Express, Jinnah Express  
  Features: View routes, book seat, cancel seat  

- **Car Transport System**  
  Services: White Cab, Karachi Taxi  
  Features: Book or cancel rides to local destinations (e.g., Malir, Gulshan)

---

## 🔐 Access Control

- Security key required for accessing airline and railway systems
- NIC and optional credit card authentication for booking/cancelling tickets

---

## 💳 Payment Methods

- Cash (print receipt only)
- Credit Card (number validation against predefined users)

---

## 🧾 Ticket Information Includes

- Name  
- NIC  
- Origin and Destination  
- Ticket Number  
- Transport Type (Airline, Train, or Taxi)

---

## 🛠 How to Compile and Run in Dev-C++

1. Open **Dev-C++**.
2. Create a **new source file** and paste the code from the `.cpp` file.
3. Save the file as `transport_system.cpp`.
4. Click **Execute > Compile & Run** or press `F11`.

---

## ⚠️ Notes

- Runs in an infinite loop for continuous use. Use `Ctrl + C` to exit or select the exit option from the menu.
- Only predefined NICs and credit card numbers are accepted.
- Designed for educational/demo use.

---

## 📄 License

This project is open for personal and academic use. No license included.
