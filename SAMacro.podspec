Pod::Spec.new do |s|

  s.name                  = "SAMacro"
  s.version               = "1.1.0"
  s.summary               = "An elegant macro tool."
  s.description           = "An elegant macro tool writen by Objective-C."
  s.homepage              = "https://github.com/Smart-AI/SAMacro"
  s.license               = { :type => 'MIT', :file => 'LICENSE' }
  s.author                = "Smart-AI"
  s.platform              = :ios, "5.0"
  s.ios.deployment_target = "5.0"
  s.source                = { :git => "https://github.com/Smart-AI/SAMacro.git", :tag => "#{s.version}" }
  s.source_files          = "SAMacro/*.{h,m}"
  s.frameworks            = "Foundation","UIKit"
  s.requires_arc          = true

end