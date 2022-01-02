import os
import shutil

if(os.path.exists('bin')):
    shutil.rmtree('bin')
if(os.path.exists('bin-int')):
    shutil.rmtree('bin-int')

if(os.path.exists('Hazel/vendor/GLFW/bin')):
    shutil.rmtree('Hazel/vendor/GLFW/bin')
if(os.path.exists('Hazel/vendor/GLFW/bin-int')):
    shutil.rmtree('Hazel/vendor/GLFW/bin-int')

if(os.path.exists('Hazel/vendor/Glad/bin')):
    shutil.rmtree('Hazel/vendor/Glad/bin')
if(os.path.exists('Hazel/vendor/Glad/bin-int')):
    shutil.rmtree('Hazel/vendor/Glad/bin-int')

print('Cleaned!')