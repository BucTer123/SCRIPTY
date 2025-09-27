from session_manager import get_client
import auth, cli, receive


client = get_client()


async def main():
    await auth.login(client)
    receive,setup_handlers(client)
    await cli.menu(client)


if __name__ == "__main__":
    client.loop.run_until_complete(main())