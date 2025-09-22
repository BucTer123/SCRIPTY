from utils import print_color


def chat(args):
    print_color("Chat bot activated! Type 'exit' to quit.", "yellow")
    responses = {
        "hello": "Hello! How are you?",
        "hi": "Hi there!",
        "how are you": "I'm a bot , I fell nothing but thanks!"
        "bye": "BYE!"
    }
    while True:
        msg = input("You: ").lower()
        if msg == "exit":
            break
        reply = responses.get(msg, "I don't understand.")
        print_color("Bot: " + reply, "green")