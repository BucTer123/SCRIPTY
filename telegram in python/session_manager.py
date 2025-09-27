from telethon import TelegramClient
from config import api_id, api_hash


def get_client():
    return TelegramClient("my_session", api_id, api_hash)