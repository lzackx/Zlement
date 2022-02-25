#
# Be sure to run `pod lib lint Zlement.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'Zlement'
  s.version          = '1.0.0'
  s.summary          = 'Elements for Z'
  s.description      = <<-DESC
  Elements for Z
  DESC
  
  s.homepage         = 'https://github.com/lzackx/Zlement'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'lzackx' => 'lzackx@lzackx.com' }
  s.source           = { :git => 'https://github.com/lzackx/Zlement.git', :tag => s.version.to_s }
  s.ios.deployment_target = '9.0'
  s.default_subspec    = "All"
  s.subspec "All" do |ss|
    ss.dependency 'Zlement/UITableView'
  end
  s.subspec "UITableView" do |ss|
    ss.source_files = [
    'Zlement/Classes/UITableView/*'
    ]
    ss.frameworks = 'UIKit'
  end
  
end
