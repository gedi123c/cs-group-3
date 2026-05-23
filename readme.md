# cinema ticket booking system

this is a simple c++ project made for programming i course project.

the program helps cinema workers manage movie ticket bookings using a menu driven system in terminal.

it uses simple programming concepts like:
- arrays
- loops
- functions
- if statements
- strings

---

# functions used in the code

## 1. bookTicket()

this function is used to add new ticket information into the system.

it asks the user to enter:
- ticket id
- customer name
- movie name
- seat number
- ticket price

after entering the data it stores everything inside arrays.

---

## 2. displayTickets()

this function displays all booked tickets.

it shows:
- ticket id
- customer name
- movie name
- seat number
- ticket price

if there are no tickets it displays a message saying no tickets found.

---

## 3. searchTicket()

this function searches for a ticket using ticket id.

if the ticket exists the program displays all information about the ticket.

if not found it shows ticket not found.

---

## 4. updateTicket()

this function updates ticket information.

the user enters a ticket id and the program allows updating:
- customer name
- movie name
- seat number
- ticket price

---

## 5. cancelTicket()

this function removes a ticket from the system.

the user enters the ticket id and the record gets deleted from arrays.

the program shifts remaining records after deletion.

---

## 6. generateReport()

this function generates a simple report.

it calculates:
- total tickets booked
- total revenue

using a loop.

---

# how to run the project

## for macos

open terminal and go to the project folder.

compile the code:

```bash
g++ cinema.cpp -o cinema
```

run the program:

```bash
./cinema
```

---

## for windows

make sure g++ compiler is installed using mingw or vscode c++ setup.

compile the code:

```bash
g++ cinema.cpp -o cinema.exe
```

run the program:

```bash
cinema.exe
```

---

## for linux

open terminal and go to the project folder.

compile the code:

```bash
g++ cinema.cpp -o cinema
```

run the program:

```bash
./cinema
```

---

# sample menu

```text
cinema ticket booking system 

1. book ticket
2. display tickets
3. search ticket
4. update ticket
5. cancel ticket
6. generate report
7. exit
```

---

