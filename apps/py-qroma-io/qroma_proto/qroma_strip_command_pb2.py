# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: qroma-strip-command.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import qroma_lights_types_pb2 as qroma__lights__types__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='qroma-strip-command.proto',
  package='',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x19qroma-strip-command.proto\x1a\x18qroma-lights-types.proto\"\x9b\x01\n\x1fSetQromaStrip_WS2812FX_Segments\x12\x33\n\nstripIndex\x18\x01 \x01(\x0e\x32\x1f.QromaStrip_WS2812FX_StripIndex\x12\x13\n\x0bnumSegments\x18\x02 \x01(\r\x12.\n\x08segments\x18\x03 \x03(\x0b\x32\x1c.QromaStrip_WS2812FX_Segment\"\xa7\x01\n\'SetQromaStrip_WS2812FX_SegmentAnimation\x12\x31\n\tanimation\x18\x01 \x01(\x0b\x32\x1e.QromaStrip_WS2812FX_Animation\x12\x33\n\nstripIndex\x18\x02 \x01(\x0e\x32\x1f.QromaStrip_WS2812FX_StripIndex\x12\x14\n\x0csegmentIndex\x18\x03 \x01(\r\"l\n!SetQromaStrip_WS2812FX_Brightness\x12\x33\n\nstripIndex\x18\x01 \x01(\x0e\x32\x1f.QromaStrip_WS2812FX_StripIndex\x12\x12\n\nbrightness\x18\x02 \x01(\r\"\x8b\x01\n!SetQromaStrip_WS2812FX_IoSettings\x12\x33\n\nstripIndex\x18\x01 \x01(\x0e\x32\x1f.QromaStrip_WS2812FX_StripIndex\x12\x31\n\x08settings\x18\x02 \x01(\x0b\x32\x1f.QromaStrip_WS2812FX_IoSettings\"R\n\x1bSaveQromaStrip_CurrentState\x12\x33\n\nstripIndex\x18\x01 \x01(\x0e\x32\x1f.QromaStrip_WS2812FX_StripIndex\"\x86\x03\n\x11QromaStripCommand\x12\x45\n\x17setQromaStripBrightness\x18\x01 \x01(\x0b\x32\".SetQromaStrip_WS2812FX_BrightnessH\x00\x12Q\n\x1dsetQromaStripSegmentAnimation\x18\x02 \x01(\x0b\x32(.SetQromaStrip_WS2812FX_SegmentAnimationH\x00\x12\x41\n\x15setQromaStripSegments\x18\x03 \x01(\x0b\x32 .SetQromaStrip_WS2812FX_SegmentsH\x00\x12\x45\n\x17setQromaStripIoSettings\x18\x04 \x01(\x0b\x32\".SetQromaStrip_WS2812FX_IoSettingsH\x00\x12\x42\n\x1asaveQromaStripCurrentState\x18\x05 \x01(\x0b\x32\x1c.SaveQromaStrip_CurrentStateH\x00\x42\t\n\x07\x63ommand\"\x14\n\x12QromaStripResponse\"5\n\x11QromaStrip_Status\x12 \n\x18lastConfigChangeTimeInMs\x18\x01 \x01(\rb\x06proto3'
  ,
  dependencies=[qroma__lights__types__pb2.DESCRIPTOR,])




_SETQROMASTRIP_WS2812FX_SEGMENTS = _descriptor.Descriptor(
  name='SetQromaStrip_WS2812FX_Segments',
  full_name='SetQromaStrip_WS2812FX_Segments',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stripIndex', full_name='SetQromaStrip_WS2812FX_Segments.stripIndex', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='numSegments', full_name='SetQromaStrip_WS2812FX_Segments.numSegments', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='segments', full_name='SetQromaStrip_WS2812FX_Segments.segments', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=56,
  serialized_end=211,
)


_SETQROMASTRIP_WS2812FX_SEGMENTANIMATION = _descriptor.Descriptor(
  name='SetQromaStrip_WS2812FX_SegmentAnimation',
  full_name='SetQromaStrip_WS2812FX_SegmentAnimation',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='animation', full_name='SetQromaStrip_WS2812FX_SegmentAnimation.animation', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stripIndex', full_name='SetQromaStrip_WS2812FX_SegmentAnimation.stripIndex', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='segmentIndex', full_name='SetQromaStrip_WS2812FX_SegmentAnimation.segmentIndex', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=214,
  serialized_end=381,
)


_SETQROMASTRIP_WS2812FX_BRIGHTNESS = _descriptor.Descriptor(
  name='SetQromaStrip_WS2812FX_Brightness',
  full_name='SetQromaStrip_WS2812FX_Brightness',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stripIndex', full_name='SetQromaStrip_WS2812FX_Brightness.stripIndex', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='brightness', full_name='SetQromaStrip_WS2812FX_Brightness.brightness', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=383,
  serialized_end=491,
)


_SETQROMASTRIP_WS2812FX_IOSETTINGS = _descriptor.Descriptor(
  name='SetQromaStrip_WS2812FX_IoSettings',
  full_name='SetQromaStrip_WS2812FX_IoSettings',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stripIndex', full_name='SetQromaStrip_WS2812FX_IoSettings.stripIndex', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='settings', full_name='SetQromaStrip_WS2812FX_IoSettings.settings', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=494,
  serialized_end=633,
)


_SAVEQROMASTRIP_CURRENTSTATE = _descriptor.Descriptor(
  name='SaveQromaStrip_CurrentState',
  full_name='SaveQromaStrip_CurrentState',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stripIndex', full_name='SaveQromaStrip_CurrentState.stripIndex', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=635,
  serialized_end=717,
)


_QROMASTRIPCOMMAND = _descriptor.Descriptor(
  name='QromaStripCommand',
  full_name='QromaStripCommand',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='setQromaStripBrightness', full_name='QromaStripCommand.setQromaStripBrightness', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='setQromaStripSegmentAnimation', full_name='QromaStripCommand.setQromaStripSegmentAnimation', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='setQromaStripSegments', full_name='QromaStripCommand.setQromaStripSegments', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='setQromaStripIoSettings', full_name='QromaStripCommand.setQromaStripIoSettings', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='saveQromaStripCurrentState', full_name='QromaStripCommand.saveQromaStripCurrentState', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='command', full_name='QromaStripCommand.command',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=720,
  serialized_end=1110,
)


_QROMASTRIPRESPONSE = _descriptor.Descriptor(
  name='QromaStripResponse',
  full_name='QromaStripResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1112,
  serialized_end=1132,
)


_QROMASTRIP_STATUS = _descriptor.Descriptor(
  name='QromaStrip_Status',
  full_name='QromaStrip_Status',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='lastConfigChangeTimeInMs', full_name='QromaStrip_Status.lastConfigChangeTimeInMs', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1134,
  serialized_end=1187,
)

_SETQROMASTRIP_WS2812FX_SEGMENTS.fields_by_name['stripIndex'].enum_type = qroma__lights__types__pb2._QROMASTRIP_WS2812FX_STRIPINDEX
_SETQROMASTRIP_WS2812FX_SEGMENTS.fields_by_name['segments'].message_type = qroma__lights__types__pb2._QROMASTRIP_WS2812FX_SEGMENT
_SETQROMASTRIP_WS2812FX_SEGMENTANIMATION.fields_by_name['animation'].message_type = qroma__lights__types__pb2._QROMASTRIP_WS2812FX_ANIMATION
_SETQROMASTRIP_WS2812FX_SEGMENTANIMATION.fields_by_name['stripIndex'].enum_type = qroma__lights__types__pb2._QROMASTRIP_WS2812FX_STRIPINDEX
_SETQROMASTRIP_WS2812FX_BRIGHTNESS.fields_by_name['stripIndex'].enum_type = qroma__lights__types__pb2._QROMASTRIP_WS2812FX_STRIPINDEX
_SETQROMASTRIP_WS2812FX_IOSETTINGS.fields_by_name['stripIndex'].enum_type = qroma__lights__types__pb2._QROMASTRIP_WS2812FX_STRIPINDEX
_SETQROMASTRIP_WS2812FX_IOSETTINGS.fields_by_name['settings'].message_type = qroma__lights__types__pb2._QROMASTRIP_WS2812FX_IOSETTINGS
_SAVEQROMASTRIP_CURRENTSTATE.fields_by_name['stripIndex'].enum_type = qroma__lights__types__pb2._QROMASTRIP_WS2812FX_STRIPINDEX
_QROMASTRIPCOMMAND.fields_by_name['setQromaStripBrightness'].message_type = _SETQROMASTRIP_WS2812FX_BRIGHTNESS
_QROMASTRIPCOMMAND.fields_by_name['setQromaStripSegmentAnimation'].message_type = _SETQROMASTRIP_WS2812FX_SEGMENTANIMATION
_QROMASTRIPCOMMAND.fields_by_name['setQromaStripSegments'].message_type = _SETQROMASTRIP_WS2812FX_SEGMENTS
_QROMASTRIPCOMMAND.fields_by_name['setQromaStripIoSettings'].message_type = _SETQROMASTRIP_WS2812FX_IOSETTINGS
_QROMASTRIPCOMMAND.fields_by_name['saveQromaStripCurrentState'].message_type = _SAVEQROMASTRIP_CURRENTSTATE
_QROMASTRIPCOMMAND.oneofs_by_name['command'].fields.append(
  _QROMASTRIPCOMMAND.fields_by_name['setQromaStripBrightness'])
_QROMASTRIPCOMMAND.fields_by_name['setQromaStripBrightness'].containing_oneof = _QROMASTRIPCOMMAND.oneofs_by_name['command']
_QROMASTRIPCOMMAND.oneofs_by_name['command'].fields.append(
  _QROMASTRIPCOMMAND.fields_by_name['setQromaStripSegmentAnimation'])
_QROMASTRIPCOMMAND.fields_by_name['setQromaStripSegmentAnimation'].containing_oneof = _QROMASTRIPCOMMAND.oneofs_by_name['command']
_QROMASTRIPCOMMAND.oneofs_by_name['command'].fields.append(
  _QROMASTRIPCOMMAND.fields_by_name['setQromaStripSegments'])
_QROMASTRIPCOMMAND.fields_by_name['setQromaStripSegments'].containing_oneof = _QROMASTRIPCOMMAND.oneofs_by_name['command']
_QROMASTRIPCOMMAND.oneofs_by_name['command'].fields.append(
  _QROMASTRIPCOMMAND.fields_by_name['setQromaStripIoSettings'])
_QROMASTRIPCOMMAND.fields_by_name['setQromaStripIoSettings'].containing_oneof = _QROMASTRIPCOMMAND.oneofs_by_name['command']
_QROMASTRIPCOMMAND.oneofs_by_name['command'].fields.append(
  _QROMASTRIPCOMMAND.fields_by_name['saveQromaStripCurrentState'])
_QROMASTRIPCOMMAND.fields_by_name['saveQromaStripCurrentState'].containing_oneof = _QROMASTRIPCOMMAND.oneofs_by_name['command']
DESCRIPTOR.message_types_by_name['SetQromaStrip_WS2812FX_Segments'] = _SETQROMASTRIP_WS2812FX_SEGMENTS
DESCRIPTOR.message_types_by_name['SetQromaStrip_WS2812FX_SegmentAnimation'] = _SETQROMASTRIP_WS2812FX_SEGMENTANIMATION
DESCRIPTOR.message_types_by_name['SetQromaStrip_WS2812FX_Brightness'] = _SETQROMASTRIP_WS2812FX_BRIGHTNESS
DESCRIPTOR.message_types_by_name['SetQromaStrip_WS2812FX_IoSettings'] = _SETQROMASTRIP_WS2812FX_IOSETTINGS
DESCRIPTOR.message_types_by_name['SaveQromaStrip_CurrentState'] = _SAVEQROMASTRIP_CURRENTSTATE
DESCRIPTOR.message_types_by_name['QromaStripCommand'] = _QROMASTRIPCOMMAND
DESCRIPTOR.message_types_by_name['QromaStripResponse'] = _QROMASTRIPRESPONSE
DESCRIPTOR.message_types_by_name['QromaStrip_Status'] = _QROMASTRIP_STATUS
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SetQromaStrip_WS2812FX_Segments = _reflection.GeneratedProtocolMessageType('SetQromaStrip_WS2812FX_Segments', (_message.Message,), {
  'DESCRIPTOR' : _SETQROMASTRIP_WS2812FX_SEGMENTS,
  '__module__' : 'qroma_strip_command_pb2'
  # @@protoc_insertion_point(class_scope:SetQromaStrip_WS2812FX_Segments)
  })
_sym_db.RegisterMessage(SetQromaStrip_WS2812FX_Segments)

SetQromaStrip_WS2812FX_SegmentAnimation = _reflection.GeneratedProtocolMessageType('SetQromaStrip_WS2812FX_SegmentAnimation', (_message.Message,), {
  'DESCRIPTOR' : _SETQROMASTRIP_WS2812FX_SEGMENTANIMATION,
  '__module__' : 'qroma_strip_command_pb2'
  # @@protoc_insertion_point(class_scope:SetQromaStrip_WS2812FX_SegmentAnimation)
  })
_sym_db.RegisterMessage(SetQromaStrip_WS2812FX_SegmentAnimation)

SetQromaStrip_WS2812FX_Brightness = _reflection.GeneratedProtocolMessageType('SetQromaStrip_WS2812FX_Brightness', (_message.Message,), {
  'DESCRIPTOR' : _SETQROMASTRIP_WS2812FX_BRIGHTNESS,
  '__module__' : 'qroma_strip_command_pb2'
  # @@protoc_insertion_point(class_scope:SetQromaStrip_WS2812FX_Brightness)
  })
_sym_db.RegisterMessage(SetQromaStrip_WS2812FX_Brightness)

SetQromaStrip_WS2812FX_IoSettings = _reflection.GeneratedProtocolMessageType('SetQromaStrip_WS2812FX_IoSettings', (_message.Message,), {
  'DESCRIPTOR' : _SETQROMASTRIP_WS2812FX_IOSETTINGS,
  '__module__' : 'qroma_strip_command_pb2'
  # @@protoc_insertion_point(class_scope:SetQromaStrip_WS2812FX_IoSettings)
  })
_sym_db.RegisterMessage(SetQromaStrip_WS2812FX_IoSettings)

SaveQromaStrip_CurrentState = _reflection.GeneratedProtocolMessageType('SaveQromaStrip_CurrentState', (_message.Message,), {
  'DESCRIPTOR' : _SAVEQROMASTRIP_CURRENTSTATE,
  '__module__' : 'qroma_strip_command_pb2'
  # @@protoc_insertion_point(class_scope:SaveQromaStrip_CurrentState)
  })
_sym_db.RegisterMessage(SaveQromaStrip_CurrentState)

QromaStripCommand = _reflection.GeneratedProtocolMessageType('QromaStripCommand', (_message.Message,), {
  'DESCRIPTOR' : _QROMASTRIPCOMMAND,
  '__module__' : 'qroma_strip_command_pb2'
  # @@protoc_insertion_point(class_scope:QromaStripCommand)
  })
_sym_db.RegisterMessage(QromaStripCommand)

QromaStripResponse = _reflection.GeneratedProtocolMessageType('QromaStripResponse', (_message.Message,), {
  'DESCRIPTOR' : _QROMASTRIPRESPONSE,
  '__module__' : 'qroma_strip_command_pb2'
  # @@protoc_insertion_point(class_scope:QromaStripResponse)
  })
_sym_db.RegisterMessage(QromaStripResponse)

QromaStrip_Status = _reflection.GeneratedProtocolMessageType('QromaStrip_Status', (_message.Message,), {
  'DESCRIPTOR' : _QROMASTRIP_STATUS,
  '__module__' : 'qroma_strip_command_pb2'
  # @@protoc_insertion_point(class_scope:QromaStrip_Status)
  })
_sym_db.RegisterMessage(QromaStrip_Status)


# @@protoc_insertion_point(module_scope)
