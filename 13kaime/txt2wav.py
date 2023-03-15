# テキストデータを音声ファイルに変換するプログラム
import wave
import struct
import csv

fs = 11050
wav_data = []
with open("data.txt") as f:
    for row in csv.reader(f, quoting=csv.QUOTE_NONNUMERIC):
        wav_data.append(row[0])

amax = abs(max(wav_data,key=abs))
wav_data = [int(x /amax * 30000.0) for x in wav_data]
bwave = struct.pack("h" * len(wav_data), *wav_data)

w = wave.open("out.wav",'w')
p = (1, 2, fs, len(bwave), 'NONE', 'not compressed')
w.setparams(p)
w.writeframes(bwave)
w.close()
