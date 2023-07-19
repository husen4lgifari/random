import pyautogui as auto
import time

pesan = "TES TES TES" # INI PESAN YG INGIN KALIAN KIRIM
n = 100 # JUMLAH SPAM

time.sleep(2)

for i in range(n):
    auto.typewrite(pesan +'\n')

