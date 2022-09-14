# Hadoop 
- its mainly about hdfs and map reduce on a very high level
- it has many more compoenents that each meet certain businees needs.
- <img src="./pictures/hadoopEcosystemPart1.png" alt="drawing" width="500"/>
- <img src="./pictures/hadoopEcosystemPart2.png" alt="drawing" width="500"/>
- <img src="./pictures/hadoopEcosystemPart3.png" alt="drawing" width="500"/>
# Hadoop v1
- <img src="./pictures/hadoopClient.png" alt="drawing" width=""/>
- describes the job that is supposed to complete
- name node bassically has meta data and is master of datanode 
- hdfs has 64mb as block size
- for high availaibility hadoop has replication
## suffers from  single point of failure 
- <img src="./pictures/hadoopV1.png" alt="drawing" width="500"/>    
	
	- FS is file system in the cluster which is the meta data we was talking about.
	- lotta problems
- <img src="./pictures/hadV1Disadva.png" alt="drawing" width=500/>
# hadoop V2
- <img src="./pictures/hadoopV2.png" alt="drawing" width=500/>
- <img src="./pictures/hadoopV2Read.png" alt="drawing" width=500/>

	- key advantages are the high availaibility of the name node.

# ETL
- <img src="./pictures/ETL.png" alt="drawing" width=500/>
- ## THE HARD PART IS THAT IT IS NOT FLEXIBLE FOR NEW BUSINESS needs
- SO WE CAN OFFLOAD THE TRANSFORMING PART TO LATER WHENCE THE DATA
 IS TRANSFFERED IN RAW FORMAT TO THE DATABASE AND HENCE 
- # ELT  WAS BORN.

