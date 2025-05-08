def chatbot():
    print("Chatbot: Hello! Type 'exit' to end the chat.")
    print("Available commands: hello, hours, services, contact")

    while True:
        user_input = input("You: ").strip().lower()

        if user_input == "exit":
            print("Chatbot: Thank you! Have a nice day!")
            break
        elif user_input == "hello":
            print("Chatbot: Hello! How can I help you?")
        elif user_input == "hours":
            print("Chatbot: Our shop is open from 9 AM to 9 PM.")
        elif user_input == "services":
            print("Chatbot: We provide home delivery and customer support.")
        elif user_input == "contact":
            print("Chatbot: You can call us at +123-456-7890.")
        else:
            print("Chatbot: Sorry, I didn't understand that. Try: hello, hours, services, contact, exit.")

# Run the chatbot
chatbot()
