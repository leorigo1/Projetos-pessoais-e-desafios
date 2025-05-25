import discord
from discord.ext import commands

intents = discord.Intents.all()
bot = commands.Bot("." , intents=intents)

@bot.event
async def on_ready():
 print("Bot inicializado com sucesso!")

@bot.command()
async def ola(ctx:commands.Context):
 autor = ctx.author.name
 await ctx.reply(f"Eai {autor} digo, capitão broxa!")

@bot.command()
async def imitar(ctx:commands.Context , *, texto):
 await ctx.reply(texto)



bot.run("token-do-bot")