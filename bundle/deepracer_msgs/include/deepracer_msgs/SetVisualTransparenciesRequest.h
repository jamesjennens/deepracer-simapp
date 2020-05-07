// Generated by gencpp from file deepracer_msgs/SetVisualTransparenciesRequest.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETVISUALTRANSPARENCIESREQUEST_H
#define DEEPRACER_MSGS_MESSAGE_SETVISUALTRANSPARENCIESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace deepracer_msgs
{
template <class ContainerAllocator>
struct SetVisualTransparenciesRequest_
{
  typedef SetVisualTransparenciesRequest_<ContainerAllocator> Type;

  SetVisualTransparenciesRequest_()
    : link_names()
    , visual_names()
    , transparencies()
    , block(false)  {
    }
  SetVisualTransparenciesRequest_(const ContainerAllocator& _alloc)
    : link_names(_alloc)
    , visual_names(_alloc)
    , transparencies(_alloc)
    , block(false)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _link_names_type;
  _link_names_type link_names;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _visual_names_type;
  _visual_names_type visual_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _transparencies_type;
  _transparencies_type transparencies;

   typedef uint8_t _block_type;
  _block_type block;





  typedef boost::shared_ptr< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetVisualTransparenciesRequest_

typedef ::deepracer_msgs::SetVisualTransparenciesRequest_<std::allocator<void> > SetVisualTransparenciesRequest;

typedef boost::shared_ptr< ::deepracer_msgs::SetVisualTransparenciesRequest > SetVisualTransparenciesRequestPtr;
typedef boost::shared_ptr< ::deepracer_msgs::SetVisualTransparenciesRequest const> SetVisualTransparenciesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbffdc7ae2cc20aba81d7dc8dfbcdce6";
  }

  static const char* value(const ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbbffdc7ae2cc20abULL;
  static const uint64_t static_value2 = 0xa81d7dc8dfbcdce6ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/SetVisualTransparenciesRequest";
  }

  static const char* value(const ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] link_names\n\
string[] visual_names\n\
float64[] transparencies\n\
bool block\n\
";
  }

  static const char* value(const ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_names);
      stream.next(m.visual_names);
      stream.next(m.transparencies);
      stream.next(m.block);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetVisualTransparenciesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::SetVisualTransparenciesRequest_<ContainerAllocator>& v)
  {
    s << indent << "link_names[]" << std::endl;
    for (size_t i = 0; i < v.link_names.size(); ++i)
    {
      s << indent << "  link_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_names[i]);
    }
    s << indent << "visual_names[]" << std::endl;
    for (size_t i = 0; i < v.visual_names.size(); ++i)
    {
      s << indent << "  visual_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.visual_names[i]);
    }
    s << indent << "transparencies[]" << std::endl;
    for (size_t i = 0; i < v.transparencies.size(); ++i)
    {
      s << indent << "  transparencies[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.transparencies[i]);
    }
    s << indent << "block: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.block);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETVISUALTRANSPARENCIESREQUEST_H
