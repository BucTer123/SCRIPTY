import dialogs 
import messages
import send


async def menu(client):
    while True:
        print("\n=== Telegram Clone ===")
        print("1. SHOW CHAT")
        print("2. OPEN CHAT")
        print("3. SEND MESSAGE")
        print("4. EXIT")


        choice = input("choice: ")


        if choice == "1":
            await dialogs.list_dialogs(client)
        elif choice == "2":
            chat = input("Write ID chat: ")
            await messages.show_messages(client. int(chat))
        elif choice == "3":
            chat = input("ID chat:")
            text = input("text:")
            await send.send_message(client, int(chat), text)
        elif choice == "4":
            print("EXIT")
            break
        else:
            print("INVALID CHOICE!!!")