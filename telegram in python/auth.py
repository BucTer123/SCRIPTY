async def login(client):
    await client.start()
    me = await client.get_me()
    print(f"LOGIN {me.first_name} (@{me.username})")