// Generated by gencpp from file deepracer_msgs/SetLinkStatesRequest.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETLINKSTATESREQUEST_H
#define DEEPRACER_MSGS_MESSAGE_SETLINKSTATESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gazebo_msgs/LinkState.h>

namespace deepracer_msgs
{
template <class ContainerAllocator>
struct SetLinkStatesRequest_
{
  typedef SetLinkStatesRequest_<ContainerAllocator> Type;

  SetLinkStatesRequest_()
    : link_states()  {
    }
  SetLinkStatesRequest_(const ContainerAllocator& _alloc)
    : link_states(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::gazebo_msgs::LinkState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gazebo_msgs::LinkState_<ContainerAllocator> >::other >  _link_states_type;
  _link_states_type link_states;





  typedef boost::shared_ptr< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetLinkStatesRequest_

typedef ::deepracer_msgs::SetLinkStatesRequest_<std::allocator<void> > SetLinkStatesRequest;

typedef boost::shared_ptr< ::deepracer_msgs::SetLinkStatesRequest > SetLinkStatesRequestPtr;
typedef boost::shared_ptr< ::deepracer_msgs::SetLinkStatesRequest const> SetLinkStatesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace deepracer_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'gazebo_msgs': ['/opt/ros/kinetic/share/gazebo_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b0099583d0deafa477731a21b3e37d2";
  }

  static const char* value(const ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b0099583d0deafaULL;
  static const uint64_t static_value2 = 0x477731a21b3e37d2ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/SetLinkStatesRequest";
  }

  static const char* value(const ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/LinkState[] link_states\n\
\n\
================================================================================\n\
MSG: gazebo_msgs/LinkState\n\
# @todo: FIXME: sets pose and twist of a link.  All children link poses/twists of the URDF tree are not updated accordingly, but should be.\n\
string link_name            # link name, link_names are in gazebo scoped name notation, [model_name::body_name]\n\
geometry_msgs/Pose pose     # desired pose in reference frame\n\
geometry_msgs/Twist twist   # desired twist in reference frame\n\
string reference_frame      # set pose/twist relative to the frame of this link/body\n\
                            # leave empty or \"world\" or \"map\" defaults to world-frame\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_states);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetLinkStatesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::SetLinkStatesRequest_<ContainerAllocator>& v)
  {
    s << indent << "link_states[]" << std::endl;
    for (size_t i = 0; i < v.link_states.size(); ++i)
    {
      s << indent << "  link_states[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gazebo_msgs::LinkState_<ContainerAllocator> >::stream(s, indent + "    ", v.link_states[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETLINKSTATESREQUEST_H
