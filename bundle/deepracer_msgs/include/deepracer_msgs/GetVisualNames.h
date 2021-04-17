// Generated by gencpp from file deepracer_msgs/GetVisualNames.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETVISUALNAMES_H
#define DEEPRACER_MSGS_MESSAGE_GETVISUALNAMES_H

#include <ros/service_traits.h>


#include <deepracer_msgs/GetVisualNamesRequest.h>
#include <deepracer_msgs/GetVisualNamesResponse.h>


namespace deepracer_msgs
{

struct GetVisualNames
{

typedef GetVisualNamesRequest Request;
typedef GetVisualNamesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetVisualNames
} // namespace deepracer_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_msgs::GetVisualNames > {
  static const char* value()
  {
    return "f43c94dfba3ba3ebdb7d26fb08b0edd1";
  }

  static const char* value(const ::deepracer_msgs::GetVisualNames&) { return value(); }
};

template<>
struct DataType< ::deepracer_msgs::GetVisualNames > {
  static const char* value()
  {
    return "deepracer_msgs/GetVisualNames";
  }

  static const char* value(const ::deepracer_msgs::GetVisualNames&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_msgs::GetVisualNamesRequest> should match
// service_traits::MD5Sum< ::deepracer_msgs::GetVisualNames >
template<>
struct MD5Sum< ::deepracer_msgs::GetVisualNamesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::GetVisualNames >::value();
  }
  static const char* value(const ::deepracer_msgs::GetVisualNamesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::GetVisualNamesRequest> should match
// service_traits::DataType< ::deepracer_msgs::GetVisualNames >
template<>
struct DataType< ::deepracer_msgs::GetVisualNamesRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::GetVisualNames >::value();
  }
  static const char* value(const ::deepracer_msgs::GetVisualNamesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_msgs::GetVisualNamesResponse> should match
// service_traits::MD5Sum< ::deepracer_msgs::GetVisualNames >
template<>
struct MD5Sum< ::deepracer_msgs::GetVisualNamesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::GetVisualNames >::value();
  }
  static const char* value(const ::deepracer_msgs::GetVisualNamesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::GetVisualNamesResponse> should match
// service_traits::DataType< ::deepracer_msgs::GetVisualNames >
template<>
struct DataType< ::deepracer_msgs::GetVisualNamesResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::GetVisualNames >::value();
  }
  static const char* value(const ::deepracer_msgs::GetVisualNamesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETVISUALNAMES_H
