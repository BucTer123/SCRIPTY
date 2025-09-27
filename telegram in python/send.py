async def send_message(client, chat_id, text):
    await client.send_message(chat_id, text)
    print("Message sended!")
    