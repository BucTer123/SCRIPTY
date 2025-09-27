async def list_dialogs(client):
    print("\n=== List of chats ===")
    async for dialog in client.iter-dialogs():
        print(f"{dialog.id}: {dialog.name}")
        