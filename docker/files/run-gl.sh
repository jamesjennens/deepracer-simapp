export XAUTHORITY=/root/.Xauthority
source /opt/ros/${ROS_DISTRO}/setup.bash

if [ -z "$ROLLOUT_IDX" ]; then
	export ROLLOUT_IDX=0
fi

if [ "$1" == "build" ]; then
	rm -rf build
	rm -rf install
	colcon build
fi

if [ "$1" == "multi" ]; then
	COMMS_FILE=/mnt/comms/workers
	echo $HOSTNAME >> $COMMS_FILE
	WORKER_NUM=$(cat -n $COMMS_FILE | grep $HOSTNAME | cut -f1)
	export ROLLOUT_IDX=$(expr $WORKER_NUM - 1 )
	echo "Starting as worker $ROLLOUT_IDX"
fi

if [ -z ${2+x} ]; then
	$2 = "distributed_training.launch"
	exit

fi
# source install/setup.sh
source setup.bash
if which xterm &>/dev/null; then
	export DISPLAY=:0 # Select screen 0 by default.
	/usr/local/bin/start_desktop.sh &
	roslaunch deepracer_simulation_environment $2 &
	rqt &
	rviz &
fi

sleep 1
echo "IP: $(hostname -I) ($(hostname))"
wait
