# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from deepracer_msgs/GetVisualRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetVisualRequest(genpy.Message):
  _md5sum = "ce98c74bcee1499d7171492d4a03720d"
  _type = "deepracer_msgs/GetVisualRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string link_name
string visual_name
"""
  __slots__ = ['link_name','visual_name']
  _slot_types = ['string','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       link_name,visual_name

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetVisualRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.link_name is None:
        self.link_name = ''
      if self.visual_name is None:
        self.visual_name = ''
    else:
      self.link_name = ''
      self.visual_name = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.link_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.visual_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.link_name = str[start:end].decode('utf-8')
      else:
        self.link_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.visual_name = str[start:end].decode('utf-8')
      else:
        self.visual_name = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.link_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.visual_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.link_name = str[start:end].decode('utf-8')
      else:
        self.link_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.visual_name = str[start:end].decode('utf-8')
      else:
        self.visual_name = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from deepracer_msgs/GetVisualResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class GetVisualResponse(genpy.Message):
  _md5sum = "bc31fa8acbe9027829e3607a7f9e7454"
  _type = "deepracer_msgs/GetVisualResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """std_msgs/ColorRGBA ambient
std_msgs/ColorRGBA diffuse
std_msgs/ColorRGBA specular
std_msgs/ColorRGBA emissive
float64 transparency
bool visible
uint16 geometry_type
string mesh_geom_filename
geometry_msgs/Vector3 mesh_geom_scale
geometry_msgs/Pose pose
bool success
string status_message

================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['ambient','diffuse','specular','emissive','transparency','visible','geometry_type','mesh_geom_filename','mesh_geom_scale','pose','success','status_message']
  _slot_types = ['std_msgs/ColorRGBA','std_msgs/ColorRGBA','std_msgs/ColorRGBA','std_msgs/ColorRGBA','float64','bool','uint16','string','geometry_msgs/Vector3','geometry_msgs/Pose','bool','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ambient,diffuse,specular,emissive,transparency,visible,geometry_type,mesh_geom_filename,mesh_geom_scale,pose,success,status_message

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetVisualResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.ambient is None:
        self.ambient = std_msgs.msg.ColorRGBA()
      if self.diffuse is None:
        self.diffuse = std_msgs.msg.ColorRGBA()
      if self.specular is None:
        self.specular = std_msgs.msg.ColorRGBA()
      if self.emissive is None:
        self.emissive = std_msgs.msg.ColorRGBA()
      if self.transparency is None:
        self.transparency = 0.
      if self.visible is None:
        self.visible = False
      if self.geometry_type is None:
        self.geometry_type = 0
      if self.mesh_geom_filename is None:
        self.mesh_geom_filename = ''
      if self.mesh_geom_scale is None:
        self.mesh_geom_scale = geometry_msgs.msg.Vector3()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.success is None:
        self.success = False
      if self.status_message is None:
        self.status_message = ''
    else:
      self.ambient = std_msgs.msg.ColorRGBA()
      self.diffuse = std_msgs.msg.ColorRGBA()
      self.specular = std_msgs.msg.ColorRGBA()
      self.emissive = std_msgs.msg.ColorRGBA()
      self.transparency = 0.
      self.visible = False
      self.geometry_type = 0
      self.mesh_geom_filename = ''
      self.mesh_geom_scale = geometry_msgs.msg.Vector3()
      self.pose = geometry_msgs.msg.Pose()
      self.success = False
      self.status_message = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_16fdBH().pack(_x.ambient.r, _x.ambient.g, _x.ambient.b, _x.ambient.a, _x.diffuse.r, _x.diffuse.g, _x.diffuse.b, _x.diffuse.a, _x.specular.r, _x.specular.g, _x.specular.b, _x.specular.a, _x.emissive.r, _x.emissive.g, _x.emissive.b, _x.emissive.a, _x.transparency, _x.visible, _x.geometry_type))
      _x = self.mesh_geom_filename
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_10dB().pack(_x.mesh_geom_scale.x, _x.mesh_geom_scale.y, _x.mesh_geom_scale.z, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.success))
      _x = self.status_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.ambient is None:
        self.ambient = std_msgs.msg.ColorRGBA()
      if self.diffuse is None:
        self.diffuse = std_msgs.msg.ColorRGBA()
      if self.specular is None:
        self.specular = std_msgs.msg.ColorRGBA()
      if self.emissive is None:
        self.emissive = std_msgs.msg.ColorRGBA()
      if self.mesh_geom_scale is None:
        self.mesh_geom_scale = geometry_msgs.msg.Vector3()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 75
      (_x.ambient.r, _x.ambient.g, _x.ambient.b, _x.ambient.a, _x.diffuse.r, _x.diffuse.g, _x.diffuse.b, _x.diffuse.a, _x.specular.r, _x.specular.g, _x.specular.b, _x.specular.a, _x.emissive.r, _x.emissive.g, _x.emissive.b, _x.emissive.a, _x.transparency, _x.visible, _x.geometry_type,) = _get_struct_16fdBH().unpack(str[start:end])
      self.visible = bool(self.visible)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.mesh_geom_filename = str[start:end].decode('utf-8')
      else:
        self.mesh_geom_filename = str[start:end]
      _x = self
      start = end
      end += 81
      (_x.mesh_geom_scale.x, _x.mesh_geom_scale.y, _x.mesh_geom_scale.z, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.success,) = _get_struct_10dB().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status_message = str[start:end].decode('utf-8')
      else:
        self.status_message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_16fdBH().pack(_x.ambient.r, _x.ambient.g, _x.ambient.b, _x.ambient.a, _x.diffuse.r, _x.diffuse.g, _x.diffuse.b, _x.diffuse.a, _x.specular.r, _x.specular.g, _x.specular.b, _x.specular.a, _x.emissive.r, _x.emissive.g, _x.emissive.b, _x.emissive.a, _x.transparency, _x.visible, _x.geometry_type))
      _x = self.mesh_geom_filename
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_10dB().pack(_x.mesh_geom_scale.x, _x.mesh_geom_scale.y, _x.mesh_geom_scale.z, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.success))
      _x = self.status_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.ambient is None:
        self.ambient = std_msgs.msg.ColorRGBA()
      if self.diffuse is None:
        self.diffuse = std_msgs.msg.ColorRGBA()
      if self.specular is None:
        self.specular = std_msgs.msg.ColorRGBA()
      if self.emissive is None:
        self.emissive = std_msgs.msg.ColorRGBA()
      if self.mesh_geom_scale is None:
        self.mesh_geom_scale = geometry_msgs.msg.Vector3()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 75
      (_x.ambient.r, _x.ambient.g, _x.ambient.b, _x.ambient.a, _x.diffuse.r, _x.diffuse.g, _x.diffuse.b, _x.diffuse.a, _x.specular.r, _x.specular.g, _x.specular.b, _x.specular.a, _x.emissive.r, _x.emissive.g, _x.emissive.b, _x.emissive.a, _x.transparency, _x.visible, _x.geometry_type,) = _get_struct_16fdBH().unpack(str[start:end])
      self.visible = bool(self.visible)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.mesh_geom_filename = str[start:end].decode('utf-8')
      else:
        self.mesh_geom_filename = str[start:end]
      _x = self
      start = end
      end += 81
      (_x.mesh_geom_scale.x, _x.mesh_geom_scale.y, _x.mesh_geom_scale.z, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.success,) = _get_struct_10dB().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status_message = str[start:end].decode('utf-8')
      else:
        self.status_message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_10dB = None
def _get_struct_10dB():
    global _struct_10dB
    if _struct_10dB is None:
        _struct_10dB = struct.Struct("<10dB")
    return _struct_10dB
_struct_16fdBH = None
def _get_struct_16fdBH():
    global _struct_16fdBH
    if _struct_16fdBH is None:
        _struct_16fdBH = struct.Struct("<16fdBH")
    return _struct_16fdBH
class GetVisual(object):
  _type          = 'deepracer_msgs/GetVisual'
  _md5sum = 'addaab363bcf820667e503bbd31b4f3d'
  _request_class  = GetVisualRequest
  _response_class = GetVisualResponse
