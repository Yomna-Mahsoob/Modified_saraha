# 🚀 Modified-Saraha: Anonymous Messaging System

A C++ implementation of a privacy-first messaging platform — reimagining Saraha with a data-structures twist. Built as a command-line interface (CLI) application, this project focuses on anonymous, ID-only messaging with efficient use of STL containers and clean file handling.

    ✅ Built for a university Data Structures course
    💻 Developed in C++ 

# 🔐 Key Features

👤 User Registration & Login

    Ensures unique usernames

    Includes password validation & security

    Credentials stored securely (no plaintext passwords)

💬 Anonymous Messaging

    Messages display only the sender’s ID, keeping identities private

    Option to show sender's name if they opt in (via a checkbox)

↩️ Undo Feature

    Only the sender can undo their most recent message

    Undo removes the message pair (sender + recipient copy)

👥 Contact Management

    Manually add/remove contacts

    Removing a contact does not delete message history

🔍 Search & Sort

    Search contacts by ID

    Sort contacts by number of exchanged messages

⭐ Favorites

    Mark/unmark favorite messages

    Automatically removes the oldest favorite when limit is reached

💾 Persistent Storage

    Loads data from files on launch

    Writes updated data to files on exit

🧠 Data Structures Used
Structure	Purpose
unordered_map	Fast lookup for users and messages
vector	Stores contact lists and messages
deque	Manages favorite messages (FIFO removal)
stack	Undo last message actions
🛠 Tech Stack

    Language: C++

    IDE: Qt Creator 

    Standard Library: STL (C++ Standard Template Library)

🗃️ File Structure

    users.txt – Stores user credentials and info

    messages.txt – Holds message logs

    contacts.txt – Tracks contact relationships

    favorites.txt – Manages favorite messages

🌐 How It Works

    Pure CLI-based interface (CMD version)

    No names or photos by default – just ID-based messaging

    Optionally reveal sender’s name through a "Show Name" checkbox

 Made By

    Yomna El-Kobesy
    Mariam Muhammad
    Mariam sayed
    Sara Saeed
    Esraa Ragb
    Safaa Muhammud
  
