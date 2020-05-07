// Generated by gencpp from file deepracer_msgs/SetVisualPoseRequest.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETVISUALPOSEREQUEST_H
#define DEEPRACER_MSGS_MESSAGE_SETVISUALPOSEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace deepracer_msgs
{
template <class ContainerAllocator>
struct SetVisualPoseRequest_
{
  typedef SetVisualPoseRequest_<ContainerAllocator> Type;

  SetVisualPoseRequest_()
    : link_name()
    , visual_name()
    , pose()
    , block(false)  {
    }
  SetVisualPoseRequest_(const ContainerAllocator& _alloc)
    : link_name(_alloc)
    , visual_name(_alloc)
    , pose(_alloc)
    , block(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _link_name_type;
  _link_name_type link_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _visual_name_type;
  _visual_name_type visual_name;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef uint8_t _block_type;
  _block_type block;





  typedef boost::shared_ptr< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetVisualPoseRequest_

typedef ::deepracer_msgs::SetVisualPoseRequest_<std::allocator<void> > SetVisualPoseRequest;

typedef boost::shared_ptr< ::deepracer_msgs::SetVisualPoseRequest > SetVisualPoseRequestPtr;
typedef boost::shared_ptr< ::deepracer_msgs::SetVisualPoseRequest const> SetVisualPoseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "889db7a433106d1e1f0ee4600b405c82";
  }

  static const char* value(const ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x889db7a433106d1eULL;
  static const uint64_t static_value2 = 0x1f0ee4600b405c82ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/SetVisualPoseRequest";
  }

  static const char* value(const ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string link_name\n\
string visual_name\n\
geometry_msgs/Pose pose\n\
bool block\n\
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
";
  }

  static const char* value(const ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_name);
      stream.next(m.visual_name);
      stream.next(m.pose);
      stream.next(m.block);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetVisualPoseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::SetVisualPoseRequest_<ContainerAllocator>& v)
  {
    s << indent << "link_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_name);
    s << indent << "visual_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.visual_name);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "block: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.block);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETVISUALPOSEREQUEST_H
