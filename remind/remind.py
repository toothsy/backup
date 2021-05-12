from playsound import playsound
from time import strftime,localtime,sleep

names = ['09_00','09_30','10_00','10_30','11_00','11_30','12_00','12_30','13_00','13_30','14_00','14_30','15_00','15_30','16_00','16_30'  \
     ,'17_00','17_30','18_00','18_30','19_00','19_30','20_00','20_30','21_00','21_30','22_00','22_30','23_00','23_30','0_00','0_30']

logF=open("C:\\Users\\Administrator\\Desktop\\Desktop\\remind\\logs\\myapp.log",'w')
while(True):
	h = localtime().tm_hour
	fileName= strftime('%H_%M',localtime())
	try:
		if(fileName in names):
			print("came here")
			sound="C:\\Users\\Administrator\\Desktop\\Desktop\\remind\\mp3\\"+fileName+".mp3"
			playsound(sound)
			sleep(1794)	
		else:
			pass
	except Exception as e:
		logF.write(str(e)+" \n\nI'm gonna die now")
		logF.close()
		break
