async def show_messages(client, chat_id):
    print(f"\n=== Messages ({chat.id}) ===")
    async for message in client.iter_messages(chat_id, limit=10):
        sender = await message.get_sender()
        name = sender.first_name if sender else "???"
        print(f"{name}: {message.text}")