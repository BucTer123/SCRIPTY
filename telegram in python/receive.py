from telethon import events


def setup_handlers(client):
    @client.on(events.NewMessage)
    async def handler(event):
        sender = await event.get_sender()
        name = sender.first_name if sender else "???"
        print(f"\n New message from {name}: {event.text}")
        